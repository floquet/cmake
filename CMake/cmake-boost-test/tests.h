BOOST_AUTO_TEST_CASE(TestThatSucceeds)
{
	BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE_EXPECTED_FAILURES(TestThatFails, 1)

BOOST_AUTO_TEST_CASE(TestThatFails)
{
	BOOST_CHECK(false);
}
