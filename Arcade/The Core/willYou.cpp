bool willYou(bool young, bool beautiful, bool loved) {
    if (young && beautiful && !loved) return true;
    if (loved && (!young || !beautiful)) return true;
    return false;
}
