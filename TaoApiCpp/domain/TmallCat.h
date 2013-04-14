#ifndef TMALLCAT_H
#define TMALLCAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫搜索类目信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TmallCat : public TaoDomain
{

public:
 virtual ~TmallCat() { }

  qlonglong getCatId() const;
  void setCatId (qlonglong catId);
  QString getCatName() const;
  void setCatName (QString catName);
  
  virtual void parseResponse();

private:
/**
 * @brief 搜索前台类目id
 **/
  qlonglong catId;

/**
 * @brief 搜索前台类目名字
 **/
  QString catName;

};

#endif  /* TMALLCAT_H */
