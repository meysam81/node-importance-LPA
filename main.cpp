#include <src/network.h>



int main(int argc, char *argv[])
{
    Network network;

    string outputPath = "../outputFile.txt";


    if (argc == 2) // just input file passed as command line argument
    {
        network.initialize(argv[1]);
    }
    else if (argc == 3) // input and output
    {
        network.initialize(argv[1]);
        outputPath = argv[2];
    }
    else // none
    {
        cout << "Usage: main.o <input file path>"
                " [<output file path>]\n";
        return 4;
    }

    // start of the NIBLPA
    if (network.computeKShell())
        if (network.computeNodeInfluence())
            if (network.computeLabelInfluence())
                if (network.computeNewLabels())
                    network.writeResultsToFile(outputPath);
    // end of the NIBLPA

    return 0;
}
