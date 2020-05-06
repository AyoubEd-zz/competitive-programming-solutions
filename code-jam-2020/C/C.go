package main

import (
	"bufio"
	"fmt"
	"os"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)
func printf(f string, a ...interface{}) { fmt.Fprintf(writer, f, a...) }
func scanf(f string, a ...interface{}) { fmt.Fscanf(reader, f, a...) }

func main() {
	// STDOUT MUST BE FLUSHED MANUALLY!!!
	defer writer.Flush()
	var T, N int
	scanf("%d\n", &T)
	for cas:=1 ; cas<=T ; cas++ {
		scanf("%d\n", &N)
		res := ""
		fmt.Printf("Case #%d: %s\n",cas , res)
	}
}