type StreetSuffixTester<X extends string, Y extends string> = X extends `${infer A}${Y}` ? true : false;
