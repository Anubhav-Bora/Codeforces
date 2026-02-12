SELECT users.email,
    COUNT(user)
FROM webhooks
    JOIN users ON webhooks.user_id = users.id
GROUP BY user