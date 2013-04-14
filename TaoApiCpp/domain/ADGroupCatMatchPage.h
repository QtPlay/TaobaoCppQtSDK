#ifndef ADGROUPCATMATCHPAGE_H
#define ADGROUPCATMATCHPAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/ADGroupCatmatch.h>


/**
 * @brief 一页ADGroupCatMatch列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ADGroupCatMatchPage : public TaoDomain
{

public:
 virtual ~ADGroupCatMatchPage() { }

  QList<ADGroupCatmatch> getAdgroupCatmatchList() const;
  void setAdgroupCatmatchList (QList<ADGroupCatmatch> adgroupCatmatchList);
  qlonglong getPageNo() const;
  void setPageNo (qlonglong pageNo);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  
  virtual void parseResponse();

private:
/**
 * @brief 类目出价列表
 **/
  QList<ADGroupCatmatch> adgroupCatmatchList;

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

#endif  /* ADGROUPCATMATCHPAGE_H */
