#ifndef RECOMMENDWORDPAGE_H
#define RECOMMENDWORDPAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/RecommendWord.h>


/**
 * @brief 一页推荐词列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RecommendWordPage : public TaoDomain
{

public:
 virtual ~RecommendWordPage() { }

  qlonglong getPageNo() const;
  void setPageNo (qlonglong pageNo);
  qlonglong getPageSize() const;
  void setPageSize (qlonglong pageSize);
  QList<RecommendWord> getRecommendWordList() const;
  void setRecommendWordList (QList<RecommendWord> recommendWordList);
  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  
  virtual void parseResponse();

private:
/**
 * @brief 返回第几页的数据从1开始。 
如果输入的值大于可取得的最大页码值时，将返回 
最大的页码值并且recommend_word_list值将 
为空
 **/
  qlonglong pageNo;

/**
 * @brief 每页数据大小
 **/
  qlonglong pageSize;

/**
 * @brief 推荐词分页对象列表
 **/
  QList<RecommendWord> recommendWordList;

/**
 * @brief 所查询的数据总数
 **/
  qlonglong totalItem;

};

#endif  /* RECOMMENDWORDPAGE_H */
