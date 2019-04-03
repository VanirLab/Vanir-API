package java;

public interface Vextender
{
    /**
     * This method is invoked when the extension is loaded. It registers an
     * instance of the
     * <code>VextenderCallbacks</code> interface, providing methods that may
     * be invoked by the extension to perform various actions.
     *
     * @param callbacks An
     * <code>VextenderCallbacks</code> object.
     */
    void registerExtenderCallbacks(VextenderCallbacks callbacks);
}

