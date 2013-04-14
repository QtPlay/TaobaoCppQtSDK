#ifndef QUERYPAGINATION_H
#define QUERYPAGINATION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 查询分页结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class QueryPagination : public TaoDomain
{

public:
 virtual ~QueryPagination() { }

  qlonglong getPageIndex() const;
  void setPageIndex (qlonglong pageIndex);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  
  virtual void parseResponse();

private:
/**
 * @brief 当前页码数
 **/
  qlonglong pageIndex;

/**
 * @brief 分页记录个数，如果用户输入的记录数大于50，则一页显示50条记录
 **/
  qlonglong pageSize;

};

#endif  /* QUERYPAGINATION_H */
