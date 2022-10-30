import React, { useState } from 'react'

import MarkDownEditor from './Components/MarkDownEditor'
import MarkDown from './Components/MarkDown'

export default function App () : React.ReactElement
{
    const [textArea, SetTextArea] = useState <string> ('')


    return (
        <>
            <MarkDownEditor state = {[textArea, SetTextArea]} rows={20} cols = {50} />
            <br/>
            <MarkDown>
                {textArea}
            </MarkDown>
        </>
    )
}



