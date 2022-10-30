import React from 'react'
import ReactDOM from 'react-dom/client'

import App from './App'

const rootElement: Element | null = document.querySelector ('#root')
const root: ReactDOM.Root = ReactDOM.createRoot (rootElement as Element)

root.render (<App/>)

