import { useState } from "react";

export default function FoodSplitter() {
  const [total, setTotal] = useState(0);
  const [friends, setFriends] = useState(1);

  const share = friends > 0 ? (total / friends).toFixed(2) : 0;

  return (
    <div className="min-h-screen flex flex-col items-center justify-center bg-gray-100 p-6">
      <div className="bg-white rounded-2xl shadow-lg p-6 w-full max-w-md">
        <h1 className="text-2xl font-bold mb-4 text-center">🍽️ Food Bill Splitter</h1>

        <div className="mb-4">
          <label className="block mb-1 font-medium">Total Bill (฿)</label>
          <input
            type="number"
            className="w-full border rounded-xl p-2"
            value={total}
            onChange={(e) => setTotal(parseFloat(e.target.value) || 0)}
          />
        </div>

        <div className="mb-4">
          <label className="block mb-1 font-medium">Number of Friends</label>
          <input
            type="number"
            className="w-full border rounded-xl p-2"
            value={friends}
            onChange={(e) => setFriends(parseInt(e.target.value) || 1)}
            min="1"
          />
        </div>

        <div className="text-center">
          <p className="text-lg">Each Friend Pays:</p>
          <p className="text-3xl font-bold text-green-600">฿{share}</p>
        </div>
      </div>
    </div>
  );
}
