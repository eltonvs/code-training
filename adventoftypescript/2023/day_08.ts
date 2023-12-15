type RemoveNaughtyChildren<T> = Omit<T, `naughty_${string}` & keyof T>;
