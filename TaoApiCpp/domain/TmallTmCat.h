#ifndef TMALLTMCAT_H
#define TMALLTMCAT_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 天猫搜索特卖类目信息（查询二级类目用）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TmallTmCat : public TaoDomain
{

public:
 virtual ~TmallTmCat() { }

  qlonglong getSubCatId() const;
  void setSubCatId (qlonglong subCatId);
  QString getSubCatName() const;
  void setSubCatName (QString subCatName);
  
  virtual void parseResponse();

private:
/**
 * @brief 特卖二级类目ID
 **/
  qlonglong subCatId;

/**
 * @brief 特卖二级类目名称
 **/
  QString subCatName;

};

#endif  /* TMALLTMCAT_H */
