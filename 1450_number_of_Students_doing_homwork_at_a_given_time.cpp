class Solution
{
public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
    {
        int busyStudents = 0;
        int startTimeVal = startTime.at(0);
        int endTimeVal = endTime.at(0);

        if (startTimeVal == queryTime || endTimeVal == queryTime || (startTimeVal < queryTime && endTimeVal > queryTime))
            ++busyStudents;

        for (int i = 1; i < startTime.size(); ++i)
        {
            startTimeVal = startTime.at(i);
            endTimeVal = endTime.at(i);
            if (startTimeVal == queryTime || endTimeVal == queryTime || (startTimeVal < queryTime && endTimeVal > queryTime))
                ++busyStudents;
        }

        return busyStudents;
    }
};