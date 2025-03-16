import { StrictMode } from 'react'
import { createRoot } from 'react-dom/client'
import LandingPage from './landing-page.tsx'
import { BrowserRouter as Router, Route, Routes } from 'react-router-dom'
import ClickerGame from './ClickerGame/App.tsx'
import AiWorkshop from './AIWorkshop/App.tsx'
import { Provider } from "./components/ui/provider"
import './styles.css'

createRoot(document.getElementById('root')!).render(
  <StrictMode>
    <Router>
    <Provider>
      <Routes>
        <Route path="/" element={<LandingPage />} />
        <Route path="/ClickerGame" element={<ClickerGame />} />
        <Route path="/AIWorkshop" element={<AiWorkshop />} />
      </Routes>
    </Provider>
    </Router>
  </StrictMode>,
)
