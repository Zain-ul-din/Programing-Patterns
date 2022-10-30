import 
    React
from "react";

interface MarkDownEditor_Params
{
    cols: number,
    rows: number,
    state: [ string, React.Dispatch<React.SetStateAction<string>> ]
}

export default function MarkDownEditor 
(
    {
       cols,
       rows, 
       state,
    } : MarkDownEditor_Params
)
: React.ReactElement
{
    const [value, setValue] = state

    return (
        <>
            <textarea 
                rows     = {rows}
                cols     = {cols}
                value    = {value}
                onChange = {(e)=> setValue (e.target.value)}
            />
        </>
    )
}

