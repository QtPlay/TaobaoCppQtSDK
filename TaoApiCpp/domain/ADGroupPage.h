#ifndef ADGROUPPAGE_H
#define ADGROUPPAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/ADGroup.h>


/**
 * @brief 一页ADGroup列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ADGroupPage : public TaoDomain
{

public:
 virtual ~ADGroupPage() { }

  QList<ADGroup> getAdgroupList() const;
  void setAdgroupList (QList<ADGroup> adgroupList);
  qlonglong getPageNo() const;
  void setPageNo (qlonglong pageNo);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品对象列表
 **/
  QList<ADGroup> adgroupList;

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

#endif  /* ADGROUPPAGE_H */
