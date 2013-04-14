#ifndef SEARCHORDERRESULT_H
#define SEARCHORDERRESULT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>


/**
 * @brief 代理商订单搜索接口返回数据对象【订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SearchOrderResult : public TaoDomain
{

public:
 virtual ~SearchOrderResult() { }

  bool getHasNext() const;
  void setHasNext (bool hasNext);
  QList<qlonglong> getOrderIds() const;
  void setOrderIds (QList<qlonglong> orderIds);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  
  virtual void parseResponse();

private:
/**
 * @brief 是否还有下一页，即满足搜索条件的订单数是否还有下一个分页
 **/
  bool hasNext;

/**
 * @brief 淘宝机票订单列表
 **/
  QList<qlonglong> orderIds;

/**
 * @brief 当前淘宝系统设定的搜索结果页大小，即支持一次最多返回订单条数
 **/
  qlonglong pageSize;

};

#endif  /* SEARCHORDERRESULT_H */
