#define DATA_TYPE int
#define NA        INT32_MAX

/******************************************************************************/
/** Slicing Array Copy
 *  [start_row_index:end_row_index, start_column_index:end_column_index]
 * 
 * @param[in]   DATA_TYPE *dest             - Pointer to destination, shape[dest_rows][dest_stride]
 * @param[in]   int32_t dest_rows           - Rows in destination for error checking
 * @param[in]   int32_t dest_stride
 * @param[in]   int32_t start_dst_row_index - -dest_rows to dest_rows-1 or NA
 * @param[in]   int32_t   end_dst_row_index - -dest_rows to dest_rows-1, > start_dst_row_index, or NA
 * @param[in]   int32_t start_dst_col_index - -dest_stride to dest_stride-1 or NA
 * @param[in]   int32_t   end_dst_col_index - -dest_stride to dest_stride-1, > start_dst_col_index, or NA 
 *
 * @param[out]  DATA_TYPE *source   - Pointer to source, shape[source_rows][source_stride]
 * @param[in]   int32_t source_rows - Rows in source for error checking
 * @param[in]   int32_t source_stride
 * @param[in]   int32_t start_src_row_index - -source_rows to source_rows-1 or NA
 * @param[in]   int32_t   end_src_row_index - -source_rows to source_rows-1, > start_src_row_index, or NA
 * @param[in]   int32_t start_src_col_index - -source_stride to source_stride-1 or NA
 * @param[in]   int32_t   end_src_col_index - -source_stride to source_stride-1, > start_src_col_index, or NA
 *
 * @return      int - number of elements copied
 */
int slicing_copy(
                    DATA_TYPE *dest,             // Pointer to destination, shape[dest_rows][dest_stride]
                    int32_t dest_rows,           // Rows in destination for error checking
                    int32_t dest_stride,
                    int32_t start_dst_row_index, // -dest_rows to dest_rows-1 or NA
                    int32_t   end_dst_row_index, // -dest_rows to dest_rows-1, > start_dst_row_index, or NA
                    int32_t start_dst_col_index, // -dest_stride to dest_stride-1 or NA
                    int32_t   end_dst_col_index, // -dest_stride to dest_stride-1, > start_dst_col_index, or NA 

                    DATA_TYPE *source,   // Pointer to source, shape[source_rows][source_stride]
                    int32_t source_rows, // Rows in source for error checking
                    int32_t source_stride,
                    int32_t start_src_row_index, // -source_rows to source_rows-1 or NA
                    int32_t   end_src_row_index, // -source_rows to source_rows-1, > start_src_row_index, or NA
                    int32_t start_src_col_index, // -source_stride to source_stride-1 or NA
                    int32_t   end_src_col_index  // -source_stride to source_stride-1, > start_src_col_index, or NA
                )
{
    return 0;
}




int main()
{
    DATA_TYPE dest[100];
    DATA_TYPE source[100];
    int result = 0;






    return 0;
}
