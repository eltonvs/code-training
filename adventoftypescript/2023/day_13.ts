type BuildNumber<T extends number, N extends any[] = []> = N["length"] extends T ? N : BuildNumber<T, [0, ...N]>;
type Sum<X extends number, Y extends number> = [...BuildNumber<X>, ...BuildNumber<Y>]["length"]

type DayCounter<S extends number, E extends number> = S extends E ? S : S | DayCounter<Sum<S, 1> extends number ? Sum<S, 1> : never, E>;
