type Address = { address: string; city: string };
type PresentDeliveryList<T> = { [x in keyof T]: Address };
