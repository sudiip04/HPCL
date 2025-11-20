#!/bin/bash
#SBATCH --job-name=parallel_series_job
#SBATCH --output=parallel_series_output.txt
#SBATCH --error=parallel_series_error.txt
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=2
#SBATCH --time=00:01:00
#SBATCH --partition=cpu

module load gcc/9.3.0

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

./parallel_series
