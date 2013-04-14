#ifndef SCITEMQUERYRESPONSE_H
#define SCITEMQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/QueryPagination.h>
#include <TaoApiCpp/domain/ScItem.h>


/**
 * @brief TOP RESPONSE API: 查询后端商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ScitemQueryResponse : public TaoResponse
{
public:
 virtual ~ScitemQueryResponse() { }

  qlonglong getPageIndex() const;
  void setPageIndex (qlonglong pageIndex);  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);  QueryPagination getQueryPagination() const;
  void setQueryPagination (QueryPagination queryPagination);  QList<ScItem> getScItemList() const;
  void setScItemList (QList<ScItem> scItemList);  qlonglong getTotalPage() const;
  void setTotalPage (qlonglong totalPage);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 当前所在页数
 **/
  qlonglong pageIndex;

/**
 * @brief 返回商品列表的页数
 **/
  qlonglong pageSize;

/**
 * @brief 分页
 **/
  QueryPagination queryPagination;

/**
 * @brief List<ScItemDO>
 **/
  QList<ScItem> scItemList;

/**
 * @brief 商品条数
 **/
  qlonglong totalPage;

};

#endif
