#!/bin/bash
#SBATCH --job-name=hello_job
#SBATCH --output=hello_output.txt
#SBATCH --error=hello_error.txt
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4
#SBATCH --time=00:01:00
#SBATCH --partition=cpu

# Load compiler if needed (depends on your cluster)
module load gcc/9.3.0

# Tell OpenMP how many threads to use
export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

# Run the program
./hello
