package main

import (
	"bufio"
	"fmt"
	"os"
	"sort"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)
func printf(f string, a ...interface{}) { fmt.Fprintf(writer, f, a...) }
func scanf(f string, a ...interface{}) { fmt.Fscanf(reader, f, a...) }

type Interval struct {
	S int
	E int
	Idx int
}

type By func(p1, p2 *Interval) bool

func (by By) Sort(planets []Interval) {
	ps := &planetSorter{
		planets: planets,
		by:      by,
	}
	sort.Sort(ps)
}

type planetSorter struct {
	planets []Interval
	by      func(p1, p2 *Interval) bool
}

func (s *planetSorter) Len() int {
	return len(s.planets)
}

func (s *planetSorter) Swap(i, j int) {
	s.planets[i], s.planets[j] = s.planets[j], s.planets[i]
}

func (s *planetSorter) Less(i, j int) bool {
	return s.by(&s.planets[i], &s.planets[j])
}

func main() {
	// STDOUT MUST BE FLUSHED MANUALLY!!!
	defer writer.Flush()
	var T, N int
	scanf("%d\n", &T)

	for cas:=1; cas<=T; cas++ {
		scanf("%d\n", &N)

		for ln:=0; ln<N; ln++ {
			scanf("%d %d\n", &start, &end)

		}

		By(func(p1, p2 *Interval) bool {
			return p1.S < p2.S
		}).Sort(schedule)

		result := ""
		fmt.Printf("Case #%d: %s\n", cas, result)
	}
}
