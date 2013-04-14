#ifndef SUBWAYITEMPARTITION_H
#define SUBWAYITEMPARTITION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/SubwayItem.h>


/**
 * @brief 直通车商品分页对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SubwayItemPartition : public TaoDomain
{

public:
 virtual ~SubwayItemPartition() { }

  QList<SubwayItem> getItemList() const;
  void setItemList (QList<SubwayItem> itemList);
  bool getOrderBy() const;
  void setOrderBy (bool orderBy);
  QString getOrderField() const;
  void setOrderField (QString orderField);
  qlonglong getPageNo() const;
  void setPageNo (qlonglong pageNo);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品列表
 **/
  QList<SubwayItem> itemList;

/**
 * @brief 排序， 
True:升级False:降序
 **/
  bool orderBy;

/**
 * @brief 排序字段
 **/
  QString orderField;

/**
 * @brief 返回第几页的数据从1开始
 **/
  qlonglong pageNo;

/**
 * @brief 每页数据大小
 **/
  qlonglong pageSize;

/**
 * @brief 所查询的数据总数，只有当返回第一页数据时有值，当要求返回的数据非第一页时，此返回值无效
 **/
  qlonglong totalItem;

};

#endif  /* SUBWAYITEMPARTITION_H */
