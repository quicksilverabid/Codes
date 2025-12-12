// Placeholder for Chart.js initialization and data.
// Chart.js will be included via CDN in the HTML files.

function createLineChart(ctx, data, label, hideAxes = true) {
    new Chart(ctx, {
        type: 'line',
        data: {
            labels: ['Day 1', 'Day 2', 'Day 3', 'Day 4', 'Day 5', 'Day 6', 'Day 7'],
            datasets: [{
                label: label,
                data: data,
                borderColor: '#007bff',
                backgroundColor: 'rgba(0, 123, 255, 0.1)',
                borderWidth: 2,
                tension: 0.4,
                pointRadius: hideAxes ? 0 : 3
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false,
            scales: {
                y: {
                    beginAtZero: false,
                    display: !hideAxes // Show Y axis only if hideAxes is false
                },
                x: {
                    display: !hideAxes // Show X axis only if hideAxes is false
                }
            },
            plugins: {
                legend: {
                    display: !hideAxes
                },
                tooltip: {
                    enabled: !hideAxes
                }
            }
        }
    });
}

function createBarChart(ctx, data, labels, chartLabel) {
    new Chart(ctx, {
        type: 'bar',
        data: {
            labels: labels,
            datasets: [{
                label: chartLabel,
                data: data,
                backgroundColor: [
                    'rgba(40, 167, 69, 0.8)', // Green
                    'rgba(0, 123, 255, 0.8)', // Blue
                    'rgba(255, 193, 7, 0.8)', // Yellow
                    'rgba(220, 53, 69, 0.8)' // Red
                ],
                borderColor: [
                    'rgba(40, 167, 69, 1)',
                    'rgba(0, 123, 255, 1)',
                    'rgba(255, 193, 7, 1)',
                    'rgba(220, 53, 69, 1)'
                ],
                borderWidth: 1
            }]
        },
        options: {
            responsive: true,
            scales: {
                y: {
                    beginAtZero: true
                }
            }
        }
    });
}

function createPieChart(ctx, data, labels, chartLabel) {
    new Chart(ctx, {
        type: 'pie',
        data: {
            labels: labels,
            datasets: [{
                label: chartLabel,
                data: data,
                backgroundColor: [
                    'rgba(220, 53, 69, 0.8)', // Red (Critical)
                    'rgba(255, 193, 7, 0.8)', // Yellow (Warning)
                    'rgba(40, 167, 69, 0.8)' // Green (Normal)
                ],
                hoverOffset: 4
            }]
        },
        options: {
            responsive: true,
            plugins: {
                legend: {
                    position: 'top',
                },
                title: {
                    display: true,
                    text: chartLabel
                }
            }
        }
    });
}
