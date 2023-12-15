type BoxToys<X extends string, Y extends number, Z extends string[] = []> = Y extends Z['length'] ? Z : BoxToys<X, Y, [X, ...Z]>;
