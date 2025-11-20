#!/bin/bash
#SBATCH --job-name=private_clause
#SBATCH --output=private_clause_output.txt
#SBATCH --error=private_clause_error.txt
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4
#SBATCH --time=00:02:00
#SBATCH --partition=cpu

module load gcc/9.3.0

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

./private_clause
