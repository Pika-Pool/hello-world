package main

import (
	"fmt"
	"os"
	"rsc.io/quote"
)

func main() {
	fmt.Println("Hello World")
	fmt.Println(quote.Go())

	fmt.Println("\nYour Arguments:")
	for i, s := range os.Args {
		fmt.Printf("%d\t%s\n", i, s)
	}
}
