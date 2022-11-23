#define a function to parse an xml string
def parseXML(xmlString):
  # Create a DOM parser
  parser = xml.dom.minidom.parseString(xmlString)
  # Get the root element
  root = parser.documentElement
  # Get the first child element
  child = root.childNodes[0]
  # Get the text of the first child element
  text = child.nodeValue
  # Return the text
  return text