#ifndef KEYWORDPAGE_H
#define KEYWORDPAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/Keyword.h>


/**
 * @brief 关键词分页对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class KeywordPage : public TaoDomain
{

public:
 virtual ~KeywordPage() { }

  QList<Keyword> getKeywordList() const;
  void setKeywordList (QList<Keyword> keywordList);
  qlonglong getPageNo() const;
  void setPageNo (qlonglong pageNo);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  
  virtual void parseResponse();

private:
/**
 * @brief 关键词列表
 **/
  QList<Keyword> keywordList;

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

#endif  /* KEYWORDPAGE_H */
