#ifndef INWORDBASE_H
#define INWORDBASE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/INRecordBase.h>


/**
 * @brief 词基础数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INWordBase : public TaoDomain
{

public:
 virtual ~INWordBase() { }

  QList<INRecordBase> getInRecordBaseList() const;
  void setInRecordBaseList (QList<INRecordBase> inRecordBaseList);
  QString getWord() const;
  void setWord (QString word);
  
  virtual void parseResponse();

private:
/**
 * @brief 词数据信息列表
 **/
  QList<INRecordBase> inRecordBaseList;

/**
 * @brief 词名称
 **/
  QString word;

};

#endif  /* INWORDBASE_H */
