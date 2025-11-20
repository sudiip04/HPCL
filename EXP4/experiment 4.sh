#!/bin/bash
#SBATCH --job-name=name_job
#SBATCH --output=name_output.txt
#SBATCH --error=name_error.txt
#SBATCH --ntasks=1
#SBATCH --cpus-per-task=4
#SBATCH --time=00:01:00
#SBATCH --partition=cpu

module load gcc/9.3.0

./name
