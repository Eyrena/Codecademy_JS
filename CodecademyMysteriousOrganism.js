/*Mysterious Organism
Project Goals
Context: You’re part of a research team that has found a new mysterious organism at the bottom of the ocean near 
hydrothermal vents. Your team names the organism, Pila aequor (P. aequor), and finds that it is only comprised of 
15 DNA bases. The small DNA samples and frequency at which it mutates due to the hydrothermal vents make P. aequor 
an interesting specimen to study. However, P. aequor cannot survive above sea level and locating P. aequor in the deep 
sea is difficult and expensive. Your job is to create objects that simulate the DNA of P. aequor for your research team 
to study.
*/

// Returns a random DNA base
const returnRandBase = () => {
  const dnaBases = ['A', 'T', 'C', 'G']
  return dnaBases[Math.floor(Math.random() * 4)] 
}

// Returns a random single stand of DNA containing 15 bases
const mockUpStrand = () => {
  const newStrand = []
  for (let i = 0; i < 15; i++) {
    newStrand.push(returnRandBase())
  }
  return newStrand
}

let pAequorFactory = (specimenNo, dna) => {
  return {
  specimenNo: specimenNo,
  dna: dna,
//method #mutate
  mutate() {
    
    console.log(`======================================================`);
    console.log(`Specimen no.${this.specimenNo} with base: ${this.dna}`);

    let index = Math.floor(Math.random()*this.dna.length);
    console.log(`Mutation at index: ${index}`);
    let newBase = returnRandBase();

    while (newBase === dna[index]) {
      console.log("The bases are equal which mean there is no mutation.\n===>Will generate new base.");
      newBase = returnRandBase();
    }

    console.log(`The new base - mutation -  is ${newBase}`);
    dna[index] = newBase;

    console.log(`The new mutated base is ${this.dna}`);
    console.log(`======================================================`);
  },
//method #compareDNA
  compareDNA(pAequor) {
    let nr=0;
    for (let i=0;i<this.dna.length;i++) {
      if (this.dna[i] === pAequor.dna[i]) {
        nr++;
      }
    }

    const percentage = nr/this.dna.length*100;
    // console.log(`======================================================`);
    // console.log(`specimen #${this.specimenNo} and specimen#${pAequor.specimenNo} have ${percentage}% DNA in common`);
    // console.log(`======================================================`);

    return percentage;

  },
//method #survive
willLikelySurvive() {
  let nr=0;
  for (let i=0;i<this.dna.length;i++) {
    if (this.dna[i]==='C' || this.dna[i]==='G') {
      nr++;
    }
  }

  const percentageSurvive = nr/this.dna.length*100;

  if (percentageSurvive >= 60) {
    return true;
  } else {
    return false;
  }
},

complementStrand() {
  let complementDNA=[];
  for (let i=0;i<this.dna.length;i++) {
    if (this.dna[i] === 'A') {
      complementDNA.push('T');
   } else if (this.dna[i]==='T') {
     complementDNA.push('A');
   } else if (this.dna[i]==='C') {
     complementDNA.push('G');
   } else {
     complementDNA.push('C');
   }
  }

  return complementDNA;
}
}
}

let x1 = pAequorFactory(1,mockUpStrand());
x1.mutate();
let x2 = pAequorFactory(2,mockUpStrand());
x1.compareDNA(x2);
console.log(`Specimen #${x1.specimenNo} will survive: ${x1.willLikelySurvive()}`);
console.log(`Specimen #${x2.specimenNo} will survive: ${x2.willLikelySurvive()}`);

let specimens =[];
for (let i=0;i<30;i++) {
  specimens.push(pAequorFactory(i,mockUpStrand()));
}
// console.log(`======================================================`);
// console.log(specimens[5].dna);
// console.log(`======================================================`);
// for (let i=0;i<30;i++) {
//   console.log(`Specimen #${specimens[i].specimenNo} will survive: ${specimens[i].willLikelySurvive()}`);
// }
// console.log(`======================================================`);
// console.log(specimens[1].dna);
// console.log(specimens[1].complementStrand());

let matrix=[];
for (let i=0;i<30;i++) {
  let row=[];
  for (let j=0;j<30;j++){
    if (i===j) {
      row.push(0);
    } else {
      row.push(Math.floor(specimens[i].compareDNA(specimens[j])));
    }
  }
  matrix.push(row);
}
// for (let i=0;i<3;i++) {
//   console.log(matrix[i]);
// }

let max=matrix[0][0];
let a=0;
let b=0;
for (let i=0;i<30;i++) {
  for (let j=0;j<30;j++) {
    if (matrix[i][j]>max) {
      max= matrix[i][j];
      a=i;
      b=j;
    }
  }
}
console.log(`======================================================`);
console.log(`Specimen #${specimens[a].specimenNo} and specimen #${specimens[b].specimenNo} are the most related instances sharing ${matrix[a][b]}% of DNA`);



