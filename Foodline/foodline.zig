const std = @import("std");

const MAX_LINES = 100;

fn shortestLineIndex(lines: []u32, n: usize) usize {
    var shortest: usize = 0;
    for (lines[1..n]) |line, j| {
	    if (line < lines[shortest]) {
		    shortest = j + 1;
		}
	}
    return shortest;
}

fn solve(lines: []u32, n: usize , m: usize) void {
    var stdout = std.io.getStdOut().writer();
    for (m) |i| {
	    const shortest = shortestLineIndex(lines, n);
	    _ = try stdout.print("{}\n", .{lines[shortest]});
	    lines[shortest] += 1;
	}
}

pub fn main() !void {
    var lines: [MAX_LINES]u32 = undefined;
    var n: usize = 0;
    var m: usize = 0;

    const stdin = std.io.getStdIn().reader();
    try stdin.readInt(&n, 10);
    try stdin.readInt(&m, 10);

    for (n) |i| {
	    try stdin.readInt(&lines[i], 10);
	}

    solve(&lines[0..n], n, m);
}
