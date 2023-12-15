type DecipherNaughtyList<T extends string> = T extends `${infer A}/${infer B}` ? A | DecipherNaughtyList<B> : T;
