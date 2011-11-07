SECTIONS {
  trace_table : {
    trace_table_start = .;
    *(trace_table)
    trace_table_end = .;
  }
}
