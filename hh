html
<!DOCTYPE html>
<html lang="de">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Mein YouTube Livestream</title>
<style>
body { font-family: Arial, sans-serif; }
#chat { width: 300px; height: 500px; overflow-y: scroll; border: 1px solid #ccc; }
#stream { width: 100%; height: 500px; }
</style>
</head>
<body>
<h1>Mein YouTube Livestream</h1>
<div>
<iframe id="stream" src="https://www.youtube.com/embed/YOUR_LIVESTREAM_ID" frameborder="0" allowfullscreen></iframe>
</div>
<div id="chat">
<h2>Chat</h2>
<div id="messages"></div>
<input type="text" id="messageInput" placeholder="Nachricht eingeben...">
<button onclick="sendMessage()">Senden</button>
</div>

<script>
function sendMessage() {
const input = document.getElementById('messageInput');
const message = input.value;
if (message) {
const messagesDiv = document.getElementById('messages');
const newMessage = document.createElement('div');
newMessage.textContent = message;
messagesDiv.appendChild(newMessage);
input.value = '';
}
}
</script>
</body>
</html>
