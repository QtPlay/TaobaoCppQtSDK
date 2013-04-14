#ifndef CREATIVEPAGE_H
#define CREATIVEPAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Creative.h>


/**
 * @brief 广告创意分页对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CreativePage : public TaoDomain
{

public:
 virtual ~CreativePage() { }

  QList<Creative> getCreativeList() const;
  void setCreativeList (QList<Creative> creativeList);
  qlonglong getPageNo() const;
  void setPageNo (qlonglong pageNo);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  
  virtual void parseResponse();

private:
/**
 * @brief 广告创意列表
 **/
  QList<Creative> creativeList;

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

#endif  /* CREATIVEPAGE_H */
