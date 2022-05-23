// -4, 3
function khadane(arr) {
	let currSum = 0, max = 0;
	for(let i=0; i < arr.length; i++) {
		currSum = Math.max(arr[i], currSum + arr[i])
		max = Math.max(currSum, max)
	}

	return max
}

function main() {
	let res = khadane(arr)
	console.log(res)
}

const arr = [1, -2, -3, 4, 5, -6, 5, 5]

main()
