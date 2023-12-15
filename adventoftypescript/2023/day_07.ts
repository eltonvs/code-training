type AppendGood<T> = { [x in keyof T as `good_${string & x}`]: T[x] };
