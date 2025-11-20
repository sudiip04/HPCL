#!/bin/bash
#SBATCH --job-name=private_demo
#SBATCH --output=private_demo.out
#SBATCH --error=private_demo.err
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4
#SBATCH --time=00:01:00

module load gcc   # load compiler if needed

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

./private_demo
