'use strict'
let S = readline()
let ls = {} 
for (let i = 0; i < S.length; i++) {
  let l = S[i]
  ls[l] = ls[l] || 0
  ls[l]++
}
let c = 0
Object.keys(ls).forEach(l => {c += ls[l] * ls[l]})
print(c)