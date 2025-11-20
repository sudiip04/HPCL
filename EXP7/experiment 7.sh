#!/bin/bash
#SBATCH --job-name=static_schedule_job
#SBATCH --output=static_schedule_output.txt
#SBATCH --error=static_schedule_error.txt
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4
#SBATCH --time=00:01:00
#SBATCH --partition=cpu

module load gcc/9.3.0

export OMP_NUM_THREADS=$SLURM_CPUS_PER_TASK

./static_schedule
