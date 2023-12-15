type SantaListProtector<T> = {readonly [k in keyof T ]: T[k] extends Function | string | number | null | symbol | undefined | boolean ? T[k] : SantaListProtector<T[k]>};
