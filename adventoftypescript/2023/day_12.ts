type FindSanta<T extends any[], P extends any[] = []> = T extends [infer X, ...infer Y] ? X extends '🎅🏼' ? P['length'] : FindSanta<Y, [...P, X]> : never;
