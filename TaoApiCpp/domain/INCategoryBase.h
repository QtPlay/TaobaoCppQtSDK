#ifndef INCATEGORYBASE_H
#define INCATEGORYBASE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/INRecordBase.h>


/**
 * @brief 类目基础数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INCategoryBase : public TaoDomain
{

public:
 virtual ~INCategoryBase() { }

  qlonglong getCategoryId() const;
  void setCategoryId (qlonglong categoryId);
  QString getCategoryName() const;
  void setCategoryName (QString categoryName);
  qlonglong getCategoryPv() const;
  void setCategoryPv (qlonglong categoryPv);
  QList<INRecordBase> getInRecordBaseList() const;
  void setInRecordBaseList (QList<INRecordBase> inRecordBaseList);
  
  virtual void parseResponse();

private:
/**
 * @brief 类目ID
 **/
  qlonglong categoryId;

/**
 * @brief 类目名称
 **/
  QString categoryName;

/**
 * @brief 类目展现量
 **/
  qlonglong categoryPv;

/**
 * @brief 类目数据信息列表
 **/
  QList<INRecordBase> inRecordBaseList;

};

#endif  /* INCATEGORYBASE_H */
