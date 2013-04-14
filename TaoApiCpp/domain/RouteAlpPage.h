#ifndef ROUTEALPPAGE_H
#define ROUTEALPPAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/ComplexLogisticsRoute.h>


/**
 * @brief 线路的分页信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RouteAlpPage : public TaoDomain
{

public:
 virtual ~RouteAlpPage() { }

  QList<ComplexLogisticsRoute> getDatas() const;
  void setDatas (QList<ComplexLogisticsRoute> datas);
  qlonglong getEnd() const;
  void setEnd (qlonglong end);
  qlonglong getPageCount() const;
  void setPageCount (qlonglong pageCount);
  qlonglong getPageIndex() const;
  void setPageIndex (qlonglong pageIndex);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  qlonglong getRecordCount() const;
  void setRecordCount (qlonglong recordCount);
  qlonglong getStart() const;
  void setStart (qlonglong start);
  
  virtual void parseResponse();

private:
/**
 * @brief 线路的列表
 **/
  QList<ComplexLogisticsRoute> datas;

/**
 * @brief 结束记录数
 **/
  qlonglong end;

/**
 * @brief 总页数
 **/
  qlonglong pageCount;

/**
 * @brief 当前页码
 **/
  qlonglong pageIndex;

/**
 * @brief 每页条数
 **/
  qlonglong pageSize;

/**
 * @brief 总的记录数
 **/
  qlonglong recordCount;

/**
 * @brief 开始记录数
 **/
  qlonglong start;

};

#endif  /* ROUTEALPPAGE_H */
