#ifndef EMAIITEMSSEARCHRESPONSE_H
#define EMAIITEMSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TmallSearchTmItem.h>


/**
 * @brief TOP RESPONSE API: 根据品牌特卖（temai.tmall.com）类目返回品牌特卖商品列表。在得到商品ID列表后，再调用taobao.item.get获取商品详情，再调用taobao.taobaoke.items.convert 获取有佣金的淘客推广链接
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class EmaiItemsSearchResponse : public TaoResponse
{
public:
 virtual ~EmaiItemsSearchResponse() { }

  QList<TmallSearchTmItem> getItemList() const;
  void setItemList (QList<TmallSearchTmItem> itemList);  qlonglong getPage() const;
  void setPage (qlonglong page);  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);  qlonglong getTotalPage() const;
  void setTotalPage (qlonglong totalPage);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 特卖搜索结果宝贝列表
 **/
  QList<TmallSearchTmItem> itemList;

/**
 * @brief 当前页数
 **/
  qlonglong page;

/**
 * @brief 每页搜索返回数
 **/
  qlonglong pageSize;

/**
 * @brief 搜索总页数
 **/
  qlonglong totalPage;

/**
 * @brief 搜索结果总数
 **/
  qlonglong totalResults;

};

#endif
