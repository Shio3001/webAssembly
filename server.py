import http.server
import socketserver
import sys
Handler = http.server.SimpleHTTPRequestHandler

port_number = int(input())

Handler.extensions_map['.wasm'] = 'application/wasm'
with socketserver.TCPServer(("", port_number), Handler) as httpd:
    httpd.serve_forever()
